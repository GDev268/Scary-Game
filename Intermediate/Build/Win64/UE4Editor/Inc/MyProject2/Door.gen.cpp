// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Door.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoor() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_ADoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADoor::execToggleDoor)
	{
		P_GET_STRUCT(FVector,Z_Param_ForwardVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDoor(Z_Param_ForwardVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoor::execCloseDoor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_dt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseDoor(Z_Param_dt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoor::execOpenDoor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_dt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenDoor(Z_Param_dt);
		P_NATIVE_END;
	}
	void ADoor::StaticRegisterNativesADoor()
	{
		UClass* Class = ADoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseDoor", &ADoor::execCloseDoor },
			{ "OpenDoor", &ADoor::execOpenDoor },
			{ "ToggleDoor", &ADoor::execToggleDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADoor_CloseDoor_Statics
	{
		struct Door_eventCloseDoor_Parms
		{
			float dt;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADoor_CloseDoor_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Door_eventCloseDoor_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_CloseDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_CloseDoor_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_CloseDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_CloseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "CloseDoor", nullptr, nullptr, sizeof(Door_eventCloseDoor_Parms), Z_Construct_UFunction_ADoor_CloseDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_CloseDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_CloseDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_CloseDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_CloseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_CloseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoor_OpenDoor_Statics
	{
		struct Door_eventOpenDoor_Parms
		{
			float dt;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADoor_OpenDoor_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Door_eventOpenDoor_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_OpenDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_OpenDoor_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OpenDoor", nullptr, nullptr, sizeof(Door_eventOpenDoor_Parms), Z_Construct_UFunction_ADoor_OpenDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OpenDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_OpenDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoor_ToggleDoor_Statics
	{
		struct Door_eventToggleDoor_Parms
		{
			FVector ForwardVector;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADoor_ToggleDoor_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Door_eventToggleDoor_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_ToggleDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_ToggleDoor_Statics::NewProp_ForwardVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_ToggleDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_ToggleDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "ToggleDoor", nullptr, nullptr, sizeof(Door_eventToggleDoor_Parms), Z_Construct_UFunction_ADoor_ToggleDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_ToggleDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoor_ToggleDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_ToggleDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoor_ToggleDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoor_ToggleDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADoor_NoRegister()
	{
		return ADoor::StaticClass();
	}
	struct Z_Construct_UClass_ADoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoor_CloseDoor, "CloseDoor" }, // 3367321247
		{ &Z_Construct_UFunction_ADoor_OpenDoor, "OpenDoor" }, // 2772002294
		{ &Z_Construct_UFunction_ADoor_ToggleDoor, "ToggleDoor" }, // 2294920553
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Door.h" },
		{ "ModuleRelativePath", "Door.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_MyMesh_MetaData[] = {
		{ "Category", "Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_MyMesh = { "MyMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor, MyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_MyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_MyMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_MyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Statics::ClassParams = {
		&ADoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoor, 4167007127);
	template<> MYPROJECT2_API UClass* StaticClass<ADoor>()
	{
		return ADoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoor(Z_Construct_UClass_ADoor, &ADoor::StaticClass, TEXT("/Script/MyProject2"), TEXT("ADoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
