// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/MyProject2HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject2HUD() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_AMyProject2HUD_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_AMyProject2HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void AMyProject2HUD::StaticRegisterNativesAMyProject2HUD()
	{
	}
	UClass* Z_Construct_UClass_AMyProject2HUD_NoRegister()
	{
		return AMyProject2HUD::StaticClass();
	}
	struct Z_Construct_UClass_AMyProject2HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProject2HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProject2HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MyProject2HUD.h" },
		{ "ModuleRelativePath", "MyProject2HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProject2HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProject2HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProject2HUD_Statics::ClassParams = {
		&AMyProject2HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyProject2HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject2HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProject2HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProject2HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProject2HUD, 1081299629);
	template<> MYPROJECT2_API UClass* StaticClass<AMyProject2HUD>()
	{
		return AMyProject2HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProject2HUD(Z_Construct_UClass_AMyProject2HUD, &AMyProject2HUD::StaticClass, TEXT("/Script/MyProject2"), TEXT("AMyProject2HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProject2HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
