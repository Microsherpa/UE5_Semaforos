// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TrafficActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACar;
struct FLinearColor;
#ifdef UE5_SEMAFOROS_TrafficActor_generated_h
#error "TrafficActor.generated.h already included, missing '#pragma once' in TrafficActor.h"
#endif
#define UE5_SEMAFOROS_TrafficActor_generated_h

#define FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_15_SPARSE_DATA
#define FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwitchColor); \
	DECLARE_FUNCTION(execManageCars); \
	DECLARE_FUNCTION(execNotifyActorEndOverlap); \
	DECLARE_FUNCTION(execNotifyActorBeginOverlap);


#define FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_15_ACCESSORS
#define FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrafficActor(); \
	friend struct Z_Construct_UClass_ATrafficActor_Statics; \
public: \
	DECLARE_CLASS(ATrafficActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_Semaforos"), NO_API) \
	DECLARE_SERIALIZER(ATrafficActor)


#define FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrafficActor(ATrafficActor&&); \
	NO_API ATrafficActor(const ATrafficActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrafficActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrafficActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrafficActor) \
	NO_API virtual ~ATrafficActor();


#define FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_12_PROLOG
#define FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_15_SPARSE_DATA \
	FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_15_ACCESSORS \
	FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_SEMAFOROS_API UClass* StaticClass<class ATrafficActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Repositories_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
