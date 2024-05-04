// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Semaforos/TrafficActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrafficActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	UE5_SEMAFOROS_API UClass* Z_Construct_UClass_ACar_NoRegister();
	UE5_SEMAFOROS_API UClass* Z_Construct_UClass_ATrafficActor();
	UE5_SEMAFOROS_API UClass* Z_Construct_UClass_ATrafficActor_NoRegister();
	UE5_SEMAFOROS_API UClass* Z_Construct_UClass_UTrafficLigthActorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_Semaforos();
// End Cross Module References
	DEFINE_FUNCTION(ATrafficActor::execManageCars)
	{
		P_GET_OBJECT(ACar,Z_Param_Car);
		P_GET_UBOOL(Z_Param_add);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ManageCars(Z_Param_Car,Z_Param_add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrafficActor::execNotifyActorEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyActorEndOverlap(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrafficActor::execNotifyActorBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyActorBeginOverlap(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void ATrafficActor::StaticRegisterNativesATrafficActor()
	{
		UClass* Class = ATrafficActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ManageCars", &ATrafficActor::execManageCars },
			{ "NotifyActorBeginOverlap", &ATrafficActor::execNotifyActorBeginOverlap },
			{ "NotifyActorEndOverlap", &ATrafficActor::execNotifyActorEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATrafficActor_ManageCars_Statics
	{
		struct TrafficActor_eventManageCars_Parms
		{
			ACar* Car;
			bool add;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Car;
		static void NewProp_add_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_add;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrafficActor_ManageCars_Statics::NewProp_Car = { "Car", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrafficActor_eventManageCars_Parms, Car), Z_Construct_UClass_ACar_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ATrafficActor_ManageCars_Statics::NewProp_add_SetBit(void* Obj)
	{
		((TrafficActor_eventManageCars_Parms*)Obj)->add = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATrafficActor_ManageCars_Statics::NewProp_add = { "add", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TrafficActor_eventManageCars_Parms), &Z_Construct_UFunction_ATrafficActor_ManageCars_Statics::NewProp_add_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrafficActor_ManageCars_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrafficActor_ManageCars_Statics::NewProp_Car,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrafficActor_ManageCars_Statics::NewProp_add,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrafficActor_ManageCars_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TrafficActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrafficActor_ManageCars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrafficActor, nullptr, "ManageCars", nullptr, nullptr, Z_Construct_UFunction_ATrafficActor_ManageCars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficActor_ManageCars_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATrafficActor_ManageCars_Statics::TrafficActor_eventManageCars_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficActor_ManageCars_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrafficActor_ManageCars_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficActor_ManageCars_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATrafficActor_ManageCars_Statics::TrafficActor_eventManageCars_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATrafficActor_ManageCars()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrafficActor_ManageCars_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrafficActor_NotifyActorBeginOverlap_Statics
	{
		struct TrafficActor_eventNotifyActorBeginOverlap_Parms
		{
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrafficActor_NotifyActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrafficActor_eventNotifyActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrafficActor_NotifyActorBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrafficActor_NotifyActorBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrafficActor_NotifyActorBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TrafficActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrafficActor_NotifyActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrafficActor, nullptr, "NotifyActorBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ATrafficActor_NotifyActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficActor_NotifyActorBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATrafficActor_NotifyActorBeginOverlap_Statics::TrafficActor_eventNotifyActorBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficActor_NotifyActorBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrafficActor_NotifyActorBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficActor_NotifyActorBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATrafficActor_NotifyActorBeginOverlap_Statics::TrafficActor_eventNotifyActorBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATrafficActor_NotifyActorBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrafficActor_NotifyActorBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrafficActor_NotifyActorEndOverlap_Statics
	{
		struct TrafficActor_eventNotifyActorEndOverlap_Parms
		{
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrafficActor_NotifyActorEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrafficActor_eventNotifyActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrafficActor_NotifyActorEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrafficActor_NotifyActorEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrafficActor_NotifyActorEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TrafficActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrafficActor_NotifyActorEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrafficActor, nullptr, "NotifyActorEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ATrafficActor_NotifyActorEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficActor_NotifyActorEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATrafficActor_NotifyActorEndOverlap_Statics::TrafficActor_eventNotifyActorEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficActor_NotifyActorEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrafficActor_NotifyActorEndOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficActor_NotifyActorEndOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATrafficActor_NotifyActorEndOverlap_Statics::TrafficActor_eventNotifyActorEndOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATrafficActor_NotifyActorEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrafficActor_NotifyActorEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrafficActor);
	UClass* Z_Construct_UClass_ATrafficActor_NoRegister()
	{
		return ATrafficActor::StaticClass();
	}
	struct Z_Construct_UClass_ATrafficActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrafficLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sphereCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sphereCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CarArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CarArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_waitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_waitTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrafficActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_Semaforos,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrafficActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATrafficActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATrafficActor_ManageCars, "ManageCars" }, // 3012376190
		{ &Z_Construct_UFunction_ATrafficActor_NotifyActorBeginOverlap, "NotifyActorBeginOverlap" }, // 3844567127
		{ &Z_Construct_UFunction_ATrafficActor_NotifyActorEndOverlap, "NotifyActorEndOverlap" }, // 1154246669
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrafficActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrafficActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TrafficActor.h" },
		{ "ModuleRelativePath", "TrafficActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrafficActor_Statics::NewProp_TrafficLight_MetaData[] = {
		{ "Category", "TrafficLight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TrafficActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrafficActor_Statics::NewProp_TrafficLight = { "TrafficLight", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrafficActor, TrafficLight), Z_Construct_UClass_UTrafficLigthActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrafficActor_Statics::NewProp_TrafficLight_MetaData), Z_Construct_UClass_ATrafficActor_Statics::NewProp_TrafficLight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrafficActor_Statics::NewProp_sphereCollider_MetaData[] = {
		{ "Category", "Collider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TrafficActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrafficActor_Statics::NewProp_sphereCollider = { "sphereCollider", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrafficActor, sphereCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrafficActor_Statics::NewProp_sphereCollider_MetaData), Z_Construct_UClass_ATrafficActor_Statics::NewProp_sphereCollider_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrafficActor_Statics::NewProp_radius_MetaData[] = {
		{ "Category", "Collider" },
		{ "ModuleRelativePath", "TrafficActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrafficActor_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrafficActor, radius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrafficActor_Statics::NewProp_radius_MetaData), Z_Construct_UClass_ATrafficActor_Statics::NewProp_radius_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrafficActor_Statics::NewProp_CarArray_Inner = { "CarArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACar_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrafficActor_Statics::NewProp_CarArray_MetaData[] = {
		{ "Category", "Array" },
		{ "ModuleRelativePath", "TrafficActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATrafficActor_Statics::NewProp_CarArray = { "CarArray", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrafficActor, CarArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrafficActor_Statics::NewProp_CarArray_MetaData), Z_Construct_UClass_ATrafficActor_Statics::NewProp_CarArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrafficActor_Statics::NewProp_waitTime_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "TrafficActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrafficActor_Statics::NewProp_waitTime = { "waitTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrafficActor, waitTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrafficActor_Statics::NewProp_waitTime_MetaData), Z_Construct_UClass_ATrafficActor_Statics::NewProp_waitTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrafficActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrafficActor_Statics::NewProp_TrafficLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrafficActor_Statics::NewProp_sphereCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrafficActor_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrafficActor_Statics::NewProp_CarArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrafficActor_Statics::NewProp_CarArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrafficActor_Statics::NewProp_waitTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrafficActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrafficActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrafficActor_Statics::ClassParams = {
		&ATrafficActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATrafficActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATrafficActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrafficActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrafficActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrafficActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATrafficActor()
	{
		if (!Z_Registration_Info_UClass_ATrafficActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrafficActor.OuterSingleton, Z_Construct_UClass_ATrafficActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATrafficActor.OuterSingleton;
	}
	template<> UE5_SEMAFOROS_API UClass* StaticClass<ATrafficActor>()
	{
		return ATrafficActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrafficActor);
	ATrafficActor::~ATrafficActor() {}
	struct Z_CompiledInDeferFile_FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATrafficActor, ATrafficActor::StaticClass, TEXT("ATrafficActor"), &Z_Registration_Info_UClass_ATrafficActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrafficActor), 304256806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_3441482584(TEXT("/Script/UE5_Semaforos"),
		Z_CompiledInDeferFile_FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
