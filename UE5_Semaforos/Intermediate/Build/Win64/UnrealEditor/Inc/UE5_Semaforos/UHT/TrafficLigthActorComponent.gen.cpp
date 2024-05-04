// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Semaforos/TrafficLigthActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrafficLigthActorComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	UE5_SEMAFOROS_API UClass* Z_Construct_UClass_UTrafficLigthActorComponent();
	UE5_SEMAFOROS_API UClass* Z_Construct_UClass_UTrafficLigthActorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_Semaforos();
// End Cross Module References
	DEFINE_FUNCTION(UTrafficLigthActorComponent::execSwitchColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchColor(Z_Param_color);
		P_NATIVE_END;
	}
	void UTrafficLigthActorComponent::StaticRegisterNativesUTrafficLigthActorComponent()
	{
		UClass* Class = UTrafficLigthActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SwitchColor", &UTrafficLigthActorComponent::execSwitchColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTrafficLigthActorComponent_SwitchColor_Statics
	{
		struct TrafficLigthActorComponent_eventSwitchColor_Parms
		{
			FLinearColor color;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTrafficLigthActorComponent_SwitchColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrafficLigthActorComponent_eventSwitchColor_Parms, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrafficLigthActorComponent_SwitchColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrafficLigthActorComponent_SwitchColor_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrafficLigthActorComponent_SwitchColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TrafficLigthActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrafficLigthActorComponent_SwitchColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrafficLigthActorComponent, nullptr, "SwitchColor", nullptr, nullptr, Z_Construct_UFunction_UTrafficLigthActorComponent_SwitchColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrafficLigthActorComponent_SwitchColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTrafficLigthActorComponent_SwitchColor_Statics::TrafficLigthActorComponent_eventSwitchColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrafficLigthActorComponent_SwitchColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrafficLigthActorComponent_SwitchColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrafficLigthActorComponent_SwitchColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTrafficLigthActorComponent_SwitchColor_Statics::TrafficLigthActorComponent_eventSwitchColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTrafficLigthActorComponent_SwitchColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrafficLigthActorComponent_SwitchColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTrafficLigthActorComponent);
	UClass* Z_Construct_UClass_UTrafficLigthActorComponent_NoRegister()
	{
		return UTrafficLigthActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTrafficLigthActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_light_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_light;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrafficLigthActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_Semaforos,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrafficLigthActorComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTrafficLigthActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrafficLigthActorComponent_SwitchColor, "SwitchColor" }, // 3118273777
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrafficLigthActorComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrafficLigthActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TrafficLigthActorComponent.h" },
		{ "ModuleRelativePath", "TrafficLigthActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrafficLigthActorComponent_Statics::NewProp_light_MetaData[] = {
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TrafficLigthActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTrafficLigthActorComponent_Statics::NewProp_light = { "light", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTrafficLigthActorComponent, light), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrafficLigthActorComponent_Statics::NewProp_light_MetaData), Z_Construct_UClass_UTrafficLigthActorComponent_Statics::NewProp_light_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrafficLigthActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrafficLigthActorComponent_Statics::NewProp_light,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrafficLigthActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrafficLigthActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrafficLigthActorComponent_Statics::ClassParams = {
		&UTrafficLigthActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTrafficLigthActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTrafficLigthActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrafficLigthActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTrafficLigthActorComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrafficLigthActorComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTrafficLigthActorComponent()
	{
		if (!Z_Registration_Info_UClass_UTrafficLigthActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrafficLigthActorComponent.OuterSingleton, Z_Construct_UClass_UTrafficLigthActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTrafficLigthActorComponent.OuterSingleton;
	}
	template<> UE5_SEMAFOROS_API UClass* StaticClass<UTrafficLigthActorComponent>()
	{
		return UTrafficLigthActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrafficLigthActorComponent);
	UTrafficLigthActorComponent::~UTrafficLigthActorComponent() {}
	struct Z_CompiledInDeferFile_FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLigthActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLigthActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTrafficLigthActorComponent, UTrafficLigthActorComponent::StaticClass, TEXT("UTrafficLigthActorComponent"), &Z_Registration_Info_UClass_UTrafficLigthActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrafficLigthActorComponent), 3662425978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLigthActorComponent_h_32427952(TEXT("/Script/UE5_Semaforos"),
		Z_CompiledInDeferFile_FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLigthActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLigthActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
